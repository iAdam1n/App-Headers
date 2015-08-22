/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/NSCoding.h>

@class NSString;

@interface ZRBannerData : NSObject <NSCoding> {

	NSString* _campaignId;
	NSString* _uid;
	NSString* _title;
	NSString* _body;
	NSString* _actionText;
	NSString* _actionUrl;
	NSString* _hashString;

}

@property (nonatomic,retain) NSString * campaignId;              //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,retain) NSString * uid;                     //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                    //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,retain) NSString * actionUrl;               //@synthesize actionUrl=_actionUrl - In the implementation block
@property (nonatomic,copy) NSString * hashString;                //@synthesize hashString=_hashString - In the implementation block
+(id)bannerDataFromFile:(id)arg1 ;
-(NSString *)campaignId;
-(NSString *)actionText;
-(void)setActionText:(NSString *)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setActionUrl:(NSString *)arg1 ;
-(NSString *)actionUrl;
-(id)initWithCampaignId:(id)arg1 uid:(id)arg2 title:(id)arg3 body:(id)arg4 actionText:(id)arg5 actionUrl:(id)arg6 ;
-(BOOL)matchesTokenData:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)uid;
-(NSString *)hashString;
-(void)setBody:(NSString *)arg1 ;
-(void)setHashString:(NSString *)arg1 ;
-(void)writeToFile:(id)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
@end
