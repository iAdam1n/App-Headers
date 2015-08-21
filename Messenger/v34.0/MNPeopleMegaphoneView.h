/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNPeopleMegaphoneViewDelegate;
@class FBRichTextView, UIButton, UILabel, UITapGestureRecognizer, NSString, NSAttributedString;

@interface MNPeopleMegaphoneView : UIView <UIGestureRecognizerDelegate> {

	FBRichTextView* _contextLabel;
	UIButton* _leftButton;
	UIButton* _rightButton;
	UILabel* _titleLabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNPeopleMegaphoneViewDelegate> _delegate;
	NSString* _titleText;
	NSAttributedString* _contextText;

}

@property (assign,nonatomic,__weak) id<MNPeopleMegaphoneViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * contextText;                        //@synthesize contextText=_contextText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)contextText;
-(void)_didTapLearnMore;
-(id)initWithTitleText:(id)arg1 contextText:(id)arg2 okButtonText:(id)arg3 notNowButtonText:(id)arg4 ;
-(void)_didPressOK;
-(void)_didPressNotNow;
-(void)dealloc;
-(void)setDelegate:(id<MNPeopleMegaphoneViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPeopleMegaphoneViewDelegate>)delegate;
-(NSString *)titleText;
@end

