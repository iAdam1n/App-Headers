/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSCoding.h>

@class NSString, NSDate;

@interface ATLegacyRecord : NSObject <NSCoding> {

	NSString* uuid;
	NSString* model;
	NSString* os_version;
	NSString* carrier;
	NSDate* date;

}

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) NSString * os_version; 
@property (nonatomic,copy) NSString * carrier; 
@property (nonatomic,retain) NSDate * date; 
-(id)primaryLocale;
-(id)availableLocales;
-(NSString *)carrier;
-(void)setCarrier:(NSString *)arg1 ;
-(id)apiJSON;
-(id)apiDictionary;
-(id)requestForSendingRecord;
-(void)setOs_version:(NSString *)arg1 ;
-(NSString *)os_version;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSDate *)date;
-(NSString *)model;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)uuid;
-(void)setModel:(NSString *)arg1 ;
-(void)cleanup;
-(void)setUuid:(NSString *)arg1 ;
-(id)formattedDate:(id)arg1 ;
@end

