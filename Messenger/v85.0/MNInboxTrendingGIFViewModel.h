/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPlainPhotoViewModel, FBMessageOutgoingAttribution;

@interface MNInboxTrendingGIFViewModel : FBValueObject <NSCopying> {

	MNPlainPhotoViewModel* _photoViewModel;
	FBMessageOutgoingAttribution* _outgoingAttribution;

}

@property (nonatomic,copy,readonly) MNPlainPhotoViewModel * photoViewModel;                          //@synthesize photoViewModel=_photoViewModel - In the implementation block
@property (nonatomic,copy,readonly) FBMessageOutgoingAttribution * outgoingAttribution;              //@synthesize outgoingAttribution=_outgoingAttribution - In the implementation block
-(FBMessageOutgoingAttribution *)outgoingAttribution;
-(MNPlainPhotoViewModel *)photoViewModel;
-(id)initWithPhotoViewModel:(id)arg1 outgoingAttribution:(id)arg2 ;
@end
