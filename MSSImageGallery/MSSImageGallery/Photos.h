

#import <Foundation/Foundation.h>
#import "KTPhotoBrowserDataSource.h"

@protocol PhotosDelegate;

@interface Photos : NSObject <KTPhotoBrowserDataSource> {
   id<PhotosDelegate> delegate_;
   
   NSString *documentPath_;
   NSString *photosPath_;
   NSString *thumbnailsPath_;
   
   NSMutableArray *fileNames_;
   NSMutableDictionary *photoCache_;
   NSMutableDictionary *thumbnailCache_;
   
   NSOperationQueue *queue_;
}

@property (nonatomic, assign) id<PhotosDelegate> delegate;

- (void)flushCache;
- (void)savePhoto:(UIImage *)photo withName:(NSString *)name addToPhotoAlbum:(BOOL)addToPhotoAlbum;

@end


@protocol PhotosDelegate <NSObject>
@optional
- (void)didFinishSave;
- (void)exportImageAtPath:(NSString *)path;

@end