/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol T1OnboardingSearchViewDelegate;
@class T1OnboardingSearchField, NSString;

@interface T1OnboardingSearchView : UIView <UITextFieldDelegate> {

	id<T1OnboardingSearchViewDelegate> _delegate;
	unsigned long long _style;
	T1OnboardingSearchField* _searchField;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic,__weak) id<T1OnboardingSearchViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * userInput; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                  //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) T1OnboardingSearchField * searchField;                           //@synthesize searchField=_searchField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchField:(T1OnboardingSearchField *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<T1OnboardingSearchViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<T1OnboardingSearchViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(T1OnboardingSearchField *)searchField;
-(UIEdgeInsets)contentEdgeInsets;
-(NSString *)placeholder;
-(void)clear;
-(NSString *)userInput;
@end

