/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSURL, NSString;

@interface MPTelephoneConfirmationController : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	NSURL* _telephoneURL;
	/*^block*/id _clickHandler;

}

@property (nonatomic,retain) UIAlertView * alertView;               //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) NSURL * telephoneURL;                  //@synthesize telephoneURL=_telephoneURL - In the implementation block
@property (nonatomic,copy) id clickHandler;                         //@synthesize clickHandler=_clickHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 clickHandler:(/*^block*/id)arg2 ;
-(void)setClickHandler:(id)arg1 ;
-(void)setTelephoneURL:(NSURL *)arg1 ;
-(id)clickHandler;
-(NSURL *)telephoneURL;
-(void)show;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(UIAlertView *)alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
@end
