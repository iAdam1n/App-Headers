/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlatformJSDialogOverride.h>

@class NSMutableDictionary, NSString, NSURL;

@interface FBPlatformMutableJSDialogOverride : FBPlatformJSDialogOverride {

	NSMutableDictionary* _readwriteExtras;

}

@property (assign,nonatomic) BOOL enableScroll; 
@property (assign,nonatomic) BOOL hideNavBar; 
@property (nonatomic,copy) NSString * method; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * version; 
+(BOOL)supportsSecureCoding;
-(void)setEnableScroll:(BOOL)arg1 ;
-(id)initWithPlatformJSDialogOverride:(id)arg1 ;
-(void)setHideNavBar:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
@end
