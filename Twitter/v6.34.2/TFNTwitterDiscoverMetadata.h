/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSCoding.h>
#import <Twitter/TFNPlistSerialization.h>

@class NSString, NSDictionary;

@interface TFNTwitterDiscoverMetadata : NSObject <NSCoding, TFNPlistSerialization> {

	NSString* _storyType;
	NSString* _storySource;
	NSString* _impressionID;

}

@property (nonatomic,copy) NSString * storyType;                       //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,copy) NSString * storySource;                     //@synthesize storySource=_storySource - In the implementation block
@property (nonatomic,copy) NSString * impressionID;                    //@synthesize impressionID=_impressionID - In the implementation block
@property (nonatomic,readonly) NSDictionary * scribeItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)scribeItem;
-(NSString *)impressionID;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(void)setImpressionID:(NSString *)arg1 ;
-(NSString *)storySource;
-(void)setStorySource:(NSString *)arg1 ;
-(NSString *)storyType;
-(void)setStoryType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

