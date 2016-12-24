/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol UIAlertViewDelegate;
@class NSString, UIAlertView, NSMutableArray;

@interface AlertViewWrapper : NSObject <UIAlertViewDelegate> {

	id target;
	NSString* title;
	NSString* message;
	int cancelButtonIndex;
	UIAlertView* alertView;
	NSMutableArray* buttonTitles;
	NSMutableArray* buttonActions;
	id userInfo;
	BOOL willDismissOccurred;
	BOOL useSSOforRemediationURL;
	BOOL _highPriorityAlert;
	id<UIAlertViewDelegate> chainedDelegate;

}

@property (nonatomic,retain) id userInfo; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) int cancelButtonIndex; 
@property (assign) BOOL highPriorityAlert;                               //@synthesize highPriorityAlert=_highPriorityAlert - In the implementation block
@property (__weak) id<UIAlertViewDelegate> chainedDelegate; 
@property (retain) UIAlertView * alertView; 
@property (assign,nonatomic) BOOL useSSOforRemediationURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cancelAlertViewWrapperAnimated:(BOOL)arg1 ;
+(id)wrapperWithTarget:(id)arg1 ;
-(void)addButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)cancelNotification:(id)arg1 ;
-(id<UIAlertViewDelegate>)chainedDelegate;
-(void)setChainedDelegate:(id<UIAlertViewDelegate>)arg1 ;
-(BOOL)useSSOforRemediationURL;
-(void)setUseSSOforRemediationURL:(BOOL)arg1 ;
-(void)showAndSuppressAdditionalAlerts;
-(void)setHighPriorityAlert:(BOOL)arg1 ;
-(BOOL)highPriorityAlert;
-(void)show;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(int)cancelButtonIndex;
-(id)userInfo;
-(NSString *)title;
-(void)setCancelButtonIndex:(int)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIAlertView *)alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
@end
