/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPlaceTipsNeighborhoodInputNeighborhoodTriggerDataViewerCoordinates;

@interface FBPlaceTipsNeighborhoodInputNeighborhoodTriggerData : FBGraphQLInput {

	NSString* _requestType;
	NSString* _surface;
	FBPlaceTipsNeighborhoodInputNeighborhoodTriggerDataViewerCoordinates* _viewerCoordinates;

}

@property (nonatomic,copy) NSString * requestType;                                                                                //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * surface;                                                                                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) FBPlaceTipsNeighborhoodInputNeighborhoodTriggerDataViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBPlaceTipsNeighborhoodInputNeighborhoodTriggerDataViewerCoordinates *)viewerCoordinates;
-(void)setViewerCoordinates:(FBPlaceTipsNeighborhoodInputNeighborhoodTriggerDataViewerCoordinates *)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(void)setRequestType:(NSString *)arg1 ;
-(NSString *)requestType;
-(NSString *)surface;
@end

