
#import <UIKit/UIKit.h>

@interface PhotoPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate> {
   id delegate_;
   UIImagePickerController *imagePicker_;
   id popoverController_;
   BOOL isFromCamera_;
}

- (id)initWithDelegate:(id)delegate;
- (void)show;

@end

@protocol PhotoPickerControllerDelegate <NSObject> 
@optional
- (void)photoPickerController:(PhotoPickerController *)controller didFinishPickingWithImage:(UIImage *)image isFromCamera:(BOOL)isFromCamera;
@end;
