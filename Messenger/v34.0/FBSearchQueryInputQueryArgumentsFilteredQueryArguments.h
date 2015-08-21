/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString, NSNumber;

@interface FBSearchQueryInputQueryArgumentsFilteredQueryArguments : FBGraphQLInput {

	NSArray* _filters;
	NSString* _vertical;
	NSString* _match;
	NSString* _sort;
	NSString* _callsite;
	NSArray* _supportedExperiences;
	NSArray* _moduleSizes;
	NSArray* _supportedRoles;
	NSNumber* _promotedEntity;

}

@property (nonatomic,copy) NSArray * filters;                           //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy) NSString * vertical;                         //@synthesize vertical=_vertical - In the implementation block
@property (nonatomic,copy) NSString * match;                            //@synthesize match=_match - In the implementation block
@property (nonatomic,copy) NSString * sort;                             //@synthesize sort=_sort - In the implementation block
@property (nonatomic,copy) NSString * callsite;                         //@synthesize callsite=_callsite - In the implementation block
@property (nonatomic,copy) NSArray * supportedExperiences;              //@synthesize supportedExperiences=_supportedExperiences - In the implementation block
@property (nonatomic,copy) NSArray * moduleSizes;                       //@synthesize moduleSizes=_moduleSizes - In the implementation block
@property (nonatomic,copy) NSArray * supportedRoles;                    //@synthesize supportedRoles=_supportedRoles - In the implementation block
@property (nonatomic,copy) NSNumber * promotedEntity;                   //@synthesize promotedEntity=_promotedEntity - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)callsite;
-(void)setCallsite:(NSString *)arg1 ;
-(NSArray *)supportedExperiences;
-(void)setSupportedExperiences:(NSArray *)arg1 ;
-(NSArray *)moduleSizes;
-(void)setModuleSizes:(NSArray *)arg1 ;
-(NSArray *)supportedRoles;
-(void)setSupportedRoles:(NSArray *)arg1 ;
-(NSNumber *)promotedEntity;
-(void)setPromotedEntity:(NSNumber *)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)setVertical:(NSString *)arg1 ;
-(void)setMatch:(NSString *)arg1 ;
-(NSString *)match;
-(NSString *)vertical;
-(NSString *)sort;
-(void)setSort:(NSString *)arg1 ;
@end

