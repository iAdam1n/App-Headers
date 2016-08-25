/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate;

@interface DDLogFileInfo : NSObject {

	NSString* filePath;
	NSString* fileName;
	NSDictionary* fileAttributes;
	NSDate* creationDate;
	NSDate* modificationDate;
	unsigned long long fileSize;

}

@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDictionary * fileAttributes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) double age; 
@property (assign,nonatomic) BOOL isArchived; 
+(id)logFileWithPath:(id)arg1 ;
-(long long)reverseCompareByCreationDate:(id)arg1 ;
-(void)setIsArchived:(BOOL)arg1 ;
-(BOOL)hasExtendedAttributeWithName:(id)arg1 ;
-(void)addExtendedAttributeWithName:(id)arg1 ;
-(void)removeExtendedAttributeWithName:(id)arg1 ;
-(void)renameFile:(id)arg1 ;
-(long long)reverseCompareByModificationDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)reset;
-(NSDate *)modificationDate;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(unsigned long long)fileSize;
-(double)age;
-(NSDate *)creationDate;
-(BOOL)isArchived;
-(NSString *)fileName;
-(NSDictionary *)fileAttributes;
@end

