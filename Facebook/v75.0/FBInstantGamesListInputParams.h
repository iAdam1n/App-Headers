/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBInstantGamesListQueryParams, FBInstantGamesListKeyParams;

@interface FBInstantGamesListInputParams : FBGraphQLInput {

	FBInstantGamesListQueryParams* _query;
	FBInstantGamesListKeyParams* _key;

}

@property (nonatomic,copy) FBInstantGamesListQueryParams * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) FBInstantGamesListKeyParams * key;                  //@synthesize key=_key - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBInstantGamesListKeyParams *)key;
-(FBInstantGamesListQueryParams *)query;
-(void)setKey:(FBInstantGamesListKeyParams *)arg1 ;
-(void)setQuery:(FBInstantGamesListQueryParams *)arg1 ;
@end
