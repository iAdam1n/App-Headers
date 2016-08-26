/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface FBSDKAppInviteContent : NSObject <FBSDKCopying, NSSecureCoding> {

	NSURL* _appInvitePreviewImageURL;
	NSURL* _appLinkURL;
	NSString* _promotionCode;
	NSString* _promotionText;

}

@property (nonatomic,copy) NSURL * appInvitePreviewImageURL;              //@synthesize appInvitePreviewImageURL=_appInvitePreviewImageURL - In the implementation block
@property (nonatomic,copy) NSURL * appLinkURL;                            //@synthesize appLinkURL=_appLinkURL - In the implementation block
@property (nonatomic,copy) NSURL * previewImageURL; 
@property (nonatomic,copy) NSString * promotionCode;                      //@synthesize promotionCode=_promotionCode - In the implementation block
@property (nonatomic,copy) NSString * promotionText;                      //@synthesize promotionText=_promotionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSURL *)appInvitePreviewImageURL;
-(void)setAppInvitePreviewImageURL:(NSURL *)arg1 ;
-(BOOL)isEqualToAppInviteContent:(id)arg1 ;
-(NSURL *)appLinkURL;
-(NSString *)promotionText;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(void)setAppLinkURL:(NSURL *)arg1 ;
-(NSString *)promotionCode;
-(void)setPromotionCode:(NSString *)arg1 ;
-(void)setPromotionText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)previewImageURL;
@end
