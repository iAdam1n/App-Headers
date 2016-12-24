/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBApplicationProtocol.h>

@class UIWindow, NSArray, NSString;

@interface FBExtensionApplicationAdaptor : NSObject <FBApplicationProtocol> {

	BOOL _networkActivityIndicatorVisible;
	long long _statusBarOrientation;
	UIWindow* _keyWindow;
	NSArray* _windows;
	NSString* _preferredContentSizeCategory;

}

@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
@property (assign,getter=isNetworkActivityIndicatorVisible,nonatomic) BOOL networkActivityIndicatorVisible;              //@synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible - In the implementation block
@property (assign,nonatomic) long long statusBarOrientation;                                                             //@synthesize statusBarOrientation=_statusBarOrientation - In the implementation block
@property (nonatomic,readonly) UIWindow * keyWindow;                                                                     //@synthesize keyWindow=_keyWindow - In the implementation block
@property (nonatomic,copy,readonly) NSArray * windows;                                                                   //@synthesize windows=_windows - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory;                                             //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)statusBarOrientation;
-(UIWindow *)keyWindow;
-(BOOL)openURL:(id)arg1 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(BOOL)isNetworkActivityIndicatorVisible;
-(void)setStatusBarOrientation:(long long)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(NSArray *)windows;
@end
