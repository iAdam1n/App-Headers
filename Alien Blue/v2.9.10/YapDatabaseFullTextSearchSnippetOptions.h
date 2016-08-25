/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface YapDatabaseFullTextSearchSnippetOptions : NSObject <NSCopying> {

	int numberOfTokens;
	NSString* startMatchText;
	NSString* endMatchText;
	NSString* ellipsesText;
	NSString* columnName;

}

@property (nonatomic,copy) NSString * startMatchText; 
@property (nonatomic,copy) NSString * endMatchText; 
@property (nonatomic,copy) NSString * ellipsesText; 
@property (nonatomic,copy) NSString * columnName; 
@property (assign,nonatomic) int numberOfTokens; 
+(id)defaultStartMatchText;
+(id)defaultEndMatchText;
+(id)defaultEllipsesText;
+(int)defaultNumberOfTokens;
-(id)initForCopy;
-(void)setStartMatchText:(NSString *)arg1 ;
-(void)setEndMatchText:(NSString *)arg1 ;
-(void)setEllipsesText:(NSString *)arg1 ;
-(void)setNumberOfTokens:(int)arg1 ;
-(NSString *)startMatchText;
-(NSString *)endMatchText;
-(NSString *)ellipsesText;
-(void)setColumnName:(NSString *)arg1 ;
-(int)numberOfTokens;
-(NSString *)columnName;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

