/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1ComposeView.h>

@interface T1PhoneComposeView : T1ComposeView {

	long long _keyboardHeight;
	BOOL _autocompleteViewHidden;

}

@property (assign,nonatomic) BOOL autocompleteViewHidden;              //@synthesize autocompleteViewHidden=_autocompleteViewHidden - In the implementation block
-(void)setKeyboardHeight:(long long)arg1 ;
-(void)_animateAutocompleteView;
-(void)_layoutAutocompleteView;
-(CGRect)_autocompleteViewFrame;
-(CGRect)_legacyAutocompleteViewFrame;
-(CGRect)_autocompleteHiddenViewFrame;
-(BOOL)autocompleteViewHidden;
-(void)setAutocompleteViewHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
@end

