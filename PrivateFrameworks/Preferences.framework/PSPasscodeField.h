/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPasscodeField : UIView <UIKeyInput> {
    NSMutableArray * _dashViews;
    <PSPasscodeFieldDelegate> * _delegate;
    NSMutableArray * _digitViews;
    NSMutableArray * _dotFullViews;
    NSMutableArray * _dotOutlineViews;
    BOOL  _enabled;
    NSArray * _fieldSpacing;
    UIColor * _foregroundColor;
    int  _keyboardAppearance;
    unsigned int  _numberOfEntryFields;
    BOOL  _securePasscodeEntry;
    BOOL  _shouldBecomeFirstResponderOnTap;
    NSMutableString * _stringValue;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPasscodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, retain) NSArray *fieldSpacing;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, readonly) BOOL hasText;
@property (readonly) unsigned int hash;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) unsigned int numberOfEntryFields;
@property (nonatomic) int returnKeyType;
@property (nonatomic) BOOL securePasscodeEntry;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic) BOOL shouldBecomeFirstResponderOnTap;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

- (void).cxx_destruct;
- (void)_delegateEnteredPasscode:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (id)fieldSpacing;
- (id)foregroundColor;
- (BOOL)hasText;
- (id)initWithNumberOfEntryFields:(unsigned int)arg1;
- (void)insertText:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isSecureTextEntry;
- (int)keyboardAppearance;
- (int)keyboardType;
- (void)layoutSubviews;
- (unsigned int)numberOfEntryFields;
- (void)passcodeFieldTapped:(id)arg1;
- (BOOL)securePasscodeEntry;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFieldSpacing:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setNumberOfEntryFields:(unsigned int)arg1;
- (void)setSecurePasscodeEntry:(BOOL)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setShouldBecomeFirstResponderOnTap:(BOOL)arg1;
- (void)setStringValue:(id)arg1;
- (BOOL)shouldBecomeFirstResponderOnTap;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)stringValue;

@end
