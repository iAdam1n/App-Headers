/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSDictionary, NSString;


@protocol IGUsernameViewControllerProtocol <NSObject>
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) NSDictionary * facebookUserInfo; 
@property (nonatomic,retain) NSString * email; 
@property (assign,nonatomic,__weak) id<IGUsernameViewControllerDelegate> delegate; 
@required
-(void)setFacebookUserInfo:(id)arg1;
-(NSDictionary *)facebookUserInfo;
-(void)setEmail:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGUsernameViewControllerDelegate>)delegate;
-(void)setMode:(unsigned long long)arg1;
-(unsigned long long)mode;
-(NSString *)email;

@end

