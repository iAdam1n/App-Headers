/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQDataModel.h>

@class NSString;

@interface MQFaceModel : MQDataModel {

	float _beardHeight;
	float _foreheadHeight;
	NSString* _indicesType;
	NSString* _materialName;
	NSString* _uvName;

}

@property (assign,nonatomic) float beardHeight;                    //@synthesize beardHeight=_beardHeight - In the implementation block
@property (assign,nonatomic) float foreheadHeight;                 //@synthesize foreheadHeight=_foreheadHeight - In the implementation block
@property (nonatomic,retain) NSString * indicesType;               //@synthesize indicesType=_indicesType - In the implementation block
@property (nonatomic,retain) NSString * materialName;              //@synthesize materialName=_materialName - In the implementation block
@property (nonatomic,retain) NSString * uvName;                    //@synthesize uvName=_uvName - In the implementation block
-(void)sendChangeEvent;
-(void)setBeardHeight:(float)arg1 ;
-(void)setForeheadHeight:(float)arg1 ;
-(void)setMaterialName:(NSString *)arg1 ;
-(void)setUvName:(NSString *)arg1 ;
-(void)setIndicesType:(NSString *)arg1 ;
-(float)beardHeight;
-(float)foreheadHeight;
-(NSString *)indicesType;
-(NSString *)materialName;
-(NSString *)uvName;
-(id)init;
-(id)tagName;
@end
