/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/FBDialogsParams.h>

@class NSURL, NSString;

@interface FBInvitesDialogParams : FBDialogsParams {

	NSURL* _appLinkURL;
	NSURL* _previewImageURL;
	NSString* _data;

}

@property (nonatomic,copy) NSURL * appLinkURL;                   //@synthesize appLinkURL=_appLinkURL - In the implementation block
@property (nonatomic,copy) NSURL * previewImageURL;              //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (nonatomic,copy) NSString * data;                      //@synthesize data=_data - In the implementation block
-(void)setAppLinkURL:(NSURL *)arg1 ;
-(id)dictionaryMethodArgs;
-(NSURL *)appLinkURL;
-(NSURL *)previewImageURL;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(id)validate;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
@end

