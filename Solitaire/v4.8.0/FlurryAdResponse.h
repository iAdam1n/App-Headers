/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@interface FlurryAdResponse : NSObject {

	avro_obj_t* _adResponseSchema;
	avro_obj_t* _adUnitSchema;
	avro_obj_t* _adFrameSchema;
	avro_obj_t* _adViewTypeSchema;
	avro_obj_t* _nativeAssetTypeSchema;
	avro_obj_t* _nativeAssetSchema;
	avro_obj_t* _callbackSchema;
	avro_obj_t* _adSpaceLayoutSchema;
	avro_obj_t* _configurationSchema;
	avro_obj_t* _screenOrientationTypeSchema;
	avro_obj_t* _frequencyCapTypeSchema;
	avro_obj_t* _frequencyCapResponseInfoSchema;
	avro_obj_t* _nativeAdInfoSchema;

}
-(void)initSchema;
-(id)parseAdResponse:(id)arg1 ;
-(id)parseFreqCapInfoList:(avro_obj_t*)arg1 ;
-(void)dealloc;
@end
