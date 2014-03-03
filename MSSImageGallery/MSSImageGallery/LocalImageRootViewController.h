
#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "KTThumbsViewController.h"
#import "PhotoPickerController.h"
#import "Photos.h"


@class Photos;

@interface LocalImageRootViewController : KTThumbsViewController <PhotoPickerControllerDelegate, PhotosDelegate, MFMailComposeViewControllerDelegate> 
{
@private
   PhotoPickerController *photoPicker_;
   Photos *myPhotos_;
   UIActivityIndicatorView *activityIndicatorView_;
}

@end
