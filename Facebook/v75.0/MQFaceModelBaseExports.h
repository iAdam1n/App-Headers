/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MQFaceModelBaseExports <JSExport>
@property (assign,nonatomic) unsigned long long faceId; 
@property (nonatomic,copy) NSString * indicesType; 
@property (nonatomic,retain) id<MSQMaterialModelProtocol> material; 
@required
-(NSString *)indicesType;
-(void)setIndicesType:(id)arg1;
-(unsigned long long)faceId;
-(void)setFaceId:(unsigned long long)arg1;
-(void)setMaterial:(id)arg1;
-(id<MSQMaterialModelProtocol>)material;

@end
