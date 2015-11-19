/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

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
-(id)formattedDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSDate *)date;
-(NSString *)model;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)uuid;
-(void)setModel:(NSString *)arg1 ;
-(void)cleanup;
-(void)setUuid:(NSString *)arg1 ;
@end

