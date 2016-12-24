/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPulsarScan, FBViewerCoordinates, FBLocationTriggerWifiData;

@interface FBCrowdsourcingTofQuestionResponseData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _questionId;
	NSString* _response;
	FBPulsarScan* _bluetoothScan;
	FBViewerCoordinates* _viewerCoordinates;
	FBLocationTriggerWifiData* _wifiData;

}

@property (nonatomic,copy) NSString * clientMutationId;                          //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                   //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * questionId;                                //@synthesize questionId=_questionId - In the implementation block
@property (nonatomic,copy) NSString * response;                                  //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) FBPulsarScan * bluetoothScan;                         //@synthesize bluetoothScan=_bluetoothScan - In the implementation block
@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) FBLocationTriggerWifiData * wifiData;                 //@synthesize wifiData=_wifiData - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(void)setQuestionId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)questionId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(FBPulsarScan *)bluetoothScan;
-(void)setBluetoothScan:(FBPulsarScan *)arg1 ;
-(FBLocationTriggerWifiData *)wifiData;
-(void)setWifiData:(FBLocationTriggerWifiData *)arg1 ;
-(NSString *)response;
-(void)setResponse:(NSString *)arg1 ;
@end
