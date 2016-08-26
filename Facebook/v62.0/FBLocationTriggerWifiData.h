/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class FBLocationWifiData, NSArray;

@interface FBLocationTriggerWifiData : FBGraphQLInput {

	FBLocationWifiData* _connectedWifi;
	NSArray* _ambientWifis;

}

@property (nonatomic,copy) FBLocationWifiData * connectedWifi;              //@synthesize connectedWifi=_connectedWifi - In the implementation block
@property (nonatomic,copy) NSArray * ambientWifis;                          //@synthesize ambientWifis=_ambientWifis - In the implementation block
-(FBLocationWifiData *)connectedWifi;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setConnectedWifi:(FBLocationWifiData *)arg1 ;
-(NSArray *)ambientWifis;
-(void)setAmbientWifis:(NSArray *)arg1 ;
@end
