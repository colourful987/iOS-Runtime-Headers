/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIActivityIndicatorView, UIView, UIImage, PLImageView;

@interface PLCameraImportItemView : UIImageView <PLStackableImage> {
    PLImageView *_imageView;
    UIView *_movieBadgeView;
    UIActivityIndicatorView *_spinner;
    UIActivityIndicatorView *_shadowSpinner;
}

@property(retain) UIImage * image;
@property BOOL showProgressSpinner;
@property(readonly) BOOL isBeingManipulated;
@property float transitionProgress;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property(readonly) UIImageView * imageView;

+ (id)completedBadgeImage;
+ (float)importItemViewBorderWidth;

- (id)imageView;
- (id)image;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)transitionProgress;
- (void)setShowProgressSpinner:(BOOL)arg1;
- (BOOL)showProgressSpinner;
- (void)setDrawsBorders:(BOOL)arg1;
- (void)setTransitionProgress:(float)arg1;
- (BOOL)isBeingManipulated;
- (void)setShadowEnabled:(BOOL)arg1;
- (BOOL)isShadowEnabled;
- (void)setTextBadgeString:(id)arg1;

@end