/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSString, NSNumber;

@interface WABackupInformation : NSObject {

	NSDictionary* _data;

}

@property (nonatomic,copy) NSDictionary * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL exists; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * formattedRelativeDate; 
@property (nonatomic,readonly) NSNumber * includeVideos; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSNumber * sizeOfVideos; 
@property (nonatomic,readonly) NSDictionary * fileSizes; 
-(void)postUpdatedNotification;
-(BOOL)replaceData:(id)arg1 ;
-(id)initWithBackupInformation:(id)arg1 ;
-(NSNumber *)includeVideos;
-(void)logWithMessage:(id)arg1 ;
-(NSDictionary *)fileSizes;
-(NSString *)formattedRelativeDate;
-(NSNumber *)sizeOfVideos;
-(id)init;
-(NSNumber *)size;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)date;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSNumber *)version;
-(BOOL)exists;
@end
