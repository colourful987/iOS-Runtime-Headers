/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBColor : NSObject <NSCopying, NSSecureCoding> {
    float  _alpha;
    float  _blue;
    float  _green;
    float  _red;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly) float blue;
@property (nonatomic, readonly) float green;
@property (nonatomic, readonly) float red;
@property (nonatomic, readonly, copy) UIColor *uiColor;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (BOOL)supportsSecureCoding;

- (id)_initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (float)alpha;
- (id)awakeAfterUsingCoder:(id)arg1;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)green;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)red;
- (id)replacementObjectForCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

- (id)uiColor;

@end
