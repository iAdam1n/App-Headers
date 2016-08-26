/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNFundraiserAttachmentViewModel : FBValueObject <NSCopying> {

	BOOL _canDonate;
	NSString* _campaignID;
	NSString* _coverImageURL;
	NSString* _campaignTitle;
	NSString* _topSubtitle;
	NSString* _bottomSubtitle;
	NSURL* _mobileDonateURL;
	NSString* _xmaID;

}

@property (nonatomic,copy,readonly) NSString * campaignID;                  //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverImageURL;               //@synthesize coverImageURL=_coverImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * campaignTitle;               //@synthesize campaignTitle=_campaignTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * topSubtitle;                 //@synthesize topSubtitle=_topSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomSubtitle;              //@synthesize bottomSubtitle=_bottomSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mobileDonateURL;                //@synthesize mobileDonateURL=_mobileDonateURL - In the implementation block
@property (nonatomic,readonly) BOOL canDonate;                              //@synthesize canDonate=_canDonate - In the implementation block
@property (nonatomic,copy,readonly) NSString * xmaID;                       //@synthesize xmaID=_xmaID - In the implementation block
-(NSString *)coverImageURL;
-(NSString *)campaignTitle;
-(BOOL)canDonate;
-(id)initWithCampaignID:(id)arg1 coverImageURL:(id)arg2 campaignTitle:(id)arg3 topSubtitle:(id)arg4 bottomSubtitle:(id)arg5 mobileDonateURL:(id)arg6 canDonate:(BOOL)arg7 xmaID:(id)arg8 ;
-(NSString *)campaignID;
-(NSString *)topSubtitle;
-(NSString *)bottomSubtitle;
-(NSURL *)mobileDonateURL;
-(NSString *)xmaID;
@end
