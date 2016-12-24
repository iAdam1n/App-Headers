/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPBubbleFrameChatCell.h>
#import <Skype/SKPPreviewingForLocation.h>

@class SKPAttributedLabel, MKButton, UIView, NSString;

@interface SKPTextChatCell : SKPBubbleFrameChatCell <SKPPreviewingForLocation> {

	SKPAttributedLabel* _textLabel;
	SKPAttributedLabel* _originalTextLabel;
	MKButton* _switchLanguageButton;
	UIView* _view;

}

@property (nonatomic,readonly) UIView * view;                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) SKPAttributedLabel * textLabel;                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) SKPAttributedLabel * originalTextLabel;              //@synthesize originalTextLabel=_originalTextLabel - In the implementation block
@property (nonatomic,readonly) MKButton * switchLanguageButton;                     //@synthesize switchLanguageButton=_switchLanguageButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)innerSizeForViewModel:(id)arg1 whenConstrainedToWidth:(double)arg2 traitCollection:(id)arg3 ;
+(id)observedKeyPaths;
-(void)refreshDueToChangeInViewModelProperty:(id)arg1 ;
-(id)contentAccessibilityString;
-(id)skp_previewControllerForLocation:(CGPoint)arg1 ;
-(CGRect)skp_previewSourceRectForLocation:(CGPoint)arg1 ;
-(BOOL)isLinkHighlighted;
-(void)updateAttributedTextAndBubbleVisibility:(id)arg1 ;
-(id)textViewModel;
-(SKPAttributedLabel *)originalTextLabel;
-(MKButton *)switchLanguageButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIView *)view;
-(void)prepareForReuse;
-(SKPAttributedLabel *)textLabel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setViewModel:(id)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
-(id)innerContentView;
@end
