

#import <Foundation/Foundation.h>

@class KTThumbsViewController;

@interface KTThumbView : UIButton 
{
@private
   KTThumbsViewController *controller_;
}

@property (nonatomic, assign) KTThumbsViewController *controller;

- (id)initWithFrame:(CGRect)frame;
- (void)setThumbImage:(UIImage *)newImage;
- (void)setHasBorder:(BOOL)hasBorder;

@end

