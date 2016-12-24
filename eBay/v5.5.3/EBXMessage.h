/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBXDataObject.h>

@class NSString, NSDate;

@interface EBXMessage : EBXDataObject {

	BOOL _watchFriendly;
	NSString* _messageID;
	NSString* _messageContent;
	NSString* _messageSubject;
	NSString* _listingID;
	NSString* _externalID;
	NSString* _sender;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * messageContent;              //@synthesize messageContent=_messageContent - In the implementation block
@property (nonatomic,copy) NSString * messageSubject;              //@synthesize messageSubject=_messageSubject - In the implementation block
@property (nonatomic,copy) NSString * listingID;                   //@synthesize listingID=_listingID - In the implementation block
@property (nonatomic,copy) NSString * externalID;                  //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy) NSString * sender;                      //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL watchFriendly;                   //@synthesize watchFriendly=_watchFriendly - In the implementation block
-(void)setMessageSubject:(NSString *)arg1 ;
-(void)setWatchFriendly:(BOOL)arg1 ;
-(NSString *)messageContent;
-(void)setMessageContent:(NSString *)arg1 ;
-(BOOL)watchFriendly;
-(NSString *)listingID;
-(void)setListingID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(NSString *)sender;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)messageSubject;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
@end
