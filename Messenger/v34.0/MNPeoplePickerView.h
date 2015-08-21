/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNTokenFieldView, UIView;

@interface MNPeoplePickerView : UIView {

	MNTokenFieldView* _tokenField;
	UIView* _suggestionsView;
	UIView* _peopleSearchView;

}

@property (nonatomic,retain) UIView * suggestionsView;                     //@synthesize suggestionsView=_suggestionsView - In the implementation block
@property (nonatomic,retain) UIView * peopleSearchView;                    //@synthesize peopleSearchView=_peopleSearchView - In the implementation block
@property (nonatomic,readonly) MNTokenFieldView * tokenField;              //@synthesize tokenField=_tokenField - In the implementation block
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)mn_setBottomContentInset:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tokenFieldStyle:(long long)arg2 tokenLabelText:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 tokenFieldStyle:(long long)arg2 ;
-(MNTokenFieldView *)tokenField;
-(void)setSuggestionsView:(UIView *)arg1 ;
-(UIView *)suggestionsView;
-(void)setPeopleSearchView:(UIView *)arg1 ;
-(UIView *)peopleSearchView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
@end

