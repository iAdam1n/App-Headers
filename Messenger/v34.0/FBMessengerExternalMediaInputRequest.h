/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray;

@interface FBMessengerExternalMediaInputRequest : FBGraphQLInput {

	NSString* _query;
	NSString* _queryType;
	NSNumber* _num;
	NSString* _resultCursor;
	NSString* _groupCursor;
	NSString* _groupBy;
	NSArray* _appFbidFilter;
	NSString* _cacheDirective;
	NSArray* _mediaParams;
	NSArray* _appIconParams;

}

@property (nonatomic,copy) NSString * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSString * queryType;                   //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,copy) NSNumber * num;                         //@synthesize num=_num - In the implementation block
@property (nonatomic,copy) NSString * resultCursor;                //@synthesize resultCursor=_resultCursor - In the implementation block
@property (nonatomic,copy) NSString * groupCursor;                 //@synthesize groupCursor=_groupCursor - In the implementation block
@property (nonatomic,copy) NSString * groupBy;                     //@synthesize groupBy=_groupBy - In the implementation block
@property (nonatomic,copy) NSArray * appFbidFilter;                //@synthesize appFbidFilter=_appFbidFilter - In the implementation block
@property (nonatomic,copy) NSString * cacheDirective;              //@synthesize cacheDirective=_cacheDirective - In the implementation block
@property (nonatomic,copy) NSArray * mediaParams;                  //@synthesize mediaParams=_mediaParams - In the implementation block
@property (nonatomic,copy) NSArray * appIconParams;                //@synthesize appIconParams=_appIconParams - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setQueryType:(NSString *)arg1 ;
-(NSNumber *)num;
-(void)setNum:(NSNumber *)arg1 ;
-(NSString *)resultCursor;
-(void)setResultCursor:(NSString *)arg1 ;
-(NSString *)groupCursor;
-(void)setGroupCursor:(NSString *)arg1 ;
-(NSArray *)appFbidFilter;
-(void)setAppFbidFilter:(NSArray *)arg1 ;
-(NSString *)cacheDirective;
-(void)setCacheDirective:(NSString *)arg1 ;
-(NSArray *)mediaParams;
-(void)setMediaParams:(NSArray *)arg1 ;
-(NSArray *)appIconParams;
-(void)setAppIconParams:(NSArray *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)groupBy;
-(void)setGroupBy:(NSString *)arg1 ;
-(NSString *)queryType;
@end
