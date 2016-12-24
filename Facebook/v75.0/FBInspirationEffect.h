/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBInspirationEffectDownloadingInfo, FBInspirationEffectFrame, FBInspirationEffectMask, FBInspirationEffectParticle, FBInspirationEffectShaderFilter, FBInspirationEffectStyleTransfer, FBInspirationEffectDummyLocationFrame;

@interface FBInspirationEffect : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBInspirationEffectDownloadingInfo* _effectNotDownloaded_downloadingInfo;
	FBInspirationEffectFrame* _emptyEffect_emptyFrame;
	FBInspirationEffectFrame* _frame_frame;
	FBInspirationEffectMask* _mask_mask;
	FBInspirationEffectParticle* _particle_particle;
	FBInspirationEffectShaderFilter* _shaderFilter_shaderFilter;
	FBInspirationEffectStyleTransfer* _styleTransfer_styleTransfer;
	FBInspirationEffectDummyLocationFrame* _dummyLocationFrame_dummyLocationFrame;

}
+(id)dummyLocationFrameWithDummyLocationFrame:(id)arg1 ;
+(id)effectNotDownloadedWithDownloadingInfo:(id)arg1 ;
+(id)emptyEffectWithEmptyFrame:(id)arg1 ;
+(id)frameWithFrame:(id)arg1 ;
+(id)maskWithMask:(id)arg1 ;
+(id)particleWithParticle:(id)arg1 ;
+(id)shaderFilterWithShaderFilter:(id)arg1 ;
+(id)styleTransferWithStyleTransfer:(id)arg1 ;
-(void)matchEffectNotDownloaded:(/*^block*/id)arg1 emptyEffect:(/*^block*/id)arg2 frame:(/*^block*/id)arg3 mask:(/*^block*/id)arg4 particle:(/*^block*/id)arg5 shaderFilter:(/*^block*/id)arg6 styleTransfer:(/*^block*/id)arg7 dummyLocationFrame:(/*^block*/id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
