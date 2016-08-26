/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBViewerCoordinates, NSString, NSArray;

@interface FBLocalSERPData : FBGraphQLInput {

	FBViewerCoordinates* _viewerCoordinates;
	NSString* _semantic;
	NSString* _placeId;
	NSString* _wildcard;
	NSArray* _reactionUnitIds;

}

@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) NSString * semantic;                                  //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,copy) NSString * placeId;                                   //@synthesize placeId=_placeId - In the implementation block
@property (nonatomic,copy) NSString * wildcard;                                  //@synthesize wildcard=_wildcard - In the implementation block
@property (nonatomic,copy) NSArray * reactionUnitIds;                            //@synthesize reactionUnitIds=_reactionUnitIds - In the implementation block
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(NSString *)wildcard;
-(void)setReactionUnitIds:(NSArray *)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)reactionUnitIds;
-(void)setWildcard:(NSString *)arg1 ;
-(NSString *)placeId;
-(void)setPlaceId:(NSString *)arg1 ;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
@end
