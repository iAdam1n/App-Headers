/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBReactionTriggerCityGuideFilter : FBGraphQLInput {

	NSString* _tab;
	NSString* _listType;
	NSString* _categoryId;

}

@property (nonatomic,copy) NSString * tab;                     //@synthesize tab=_tab - In the implementation block
@property (nonatomic,copy) NSString * listType;                //@synthesize listType=_listType - In the implementation block
@property (nonatomic,copy) NSString * categoryId;              //@synthesize categoryId=_categoryId - In the implementation block
-(NSString *)tab;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)categoryId;
-(void)setCategoryId:(NSString *)arg1 ;
-(void)setTab:(NSString *)arg1 ;
-(NSString *)listType;
-(void)setListType:(NSString *)arg1 ;
@end
