/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIWindow, NSArray, NSString;


@protocol FBApplicationProtocol <NSObject>
@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
@property (assign,getter=isNetworkActivityIndicatorVisible,nonatomic) BOOL networkActivityIndicatorVisible; 
@property (assign,nonatomic) long long statusBarOrientation; 
@property (nonatomic,readonly) UIWindow * keyWindow; 
@property (nonatomic,copy,readonly) NSArray * windows; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@required
-(long long)statusBarOrientation;
-(UIWindow *)keyWindow;
-(BOOL)openURL:(id)arg1;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1;
-(NSString *)preferredContentSizeCategory;
-(BOOL)isNetworkActivityIndicatorVisible;
-(void)setStatusBarOrientation:(long long)arg1;
-(BOOL)canOpenURL:(id)arg1;
-(BOOL)isProtectedDataAvailable;
-(NSArray *)windows;

@end
