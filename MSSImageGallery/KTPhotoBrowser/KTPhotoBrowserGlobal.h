
#import <Foundation/Foundation.h>


/**
 * Returns the main bundle path concatenated with the given relative path.
 */
NSString * KTPathForBundleResource(NSString *relativePath);

/**
 * Returns the image with the given name from the KTPhotoBrowser.bundle path.
 */
UIImage * KTLoadImageFromBundle(NSString *imageName);