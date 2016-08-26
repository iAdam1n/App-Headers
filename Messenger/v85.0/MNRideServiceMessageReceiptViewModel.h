/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNRideServiceMessageMapViewModel, MNBusinessSeparatorViewModel, MNBusinessLogoViewModel, MNBusinessStackedContainerViewModel, MNBusinessTableRowViewModel, NSURL;

@interface MNRideServiceMessageReceiptViewModel : FBValueObject <NSCopying> {

	MNRideServiceMessageMapViewModel* _map;
	MNBusinessSeparatorViewModel* _mapBottomLine;
	MNBusinessLogoViewModel* _logo;
	MNBusinessStackedContainerViewModel* _locations;
	MNBusinessStackedContainerViewModel* _rideInfo;
	MNBusinessSeparatorViewModel* _footerSeparator;
	MNBusinessTableRowViewModel* _footer;
	NSURL* _receiptURL;

}

@property (nonatomic,copy,readonly) MNRideServiceMessageMapViewModel * map;                       //@synthesize map=_map - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessSeparatorViewModel * mapBottomLine;                 //@synthesize mapBottomLine=_mapBottomLine - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLogoViewModel * logo;                               //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * rideInfo;               //@synthesize rideInfo=_rideInfo - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessSeparatorViewModel * footerSeparator;               //@synthesize footerSeparator=_footerSeparator - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowViewModel * footer;                         //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSURL * receiptURL;                                           //@synthesize receiptURL=_receiptURL - In the implementation block
-(id)initWithMap:(id)arg1 mapBottomLine:(id)arg2 logo:(id)arg3 locations:(id)arg4 rideInfo:(id)arg5 footerSeparator:(id)arg6 footer:(id)arg7 receiptURL:(id)arg8 ;
-(MNBusinessSeparatorViewModel *)mapBottomLine;
-(MNBusinessStackedContainerViewModel *)rideInfo;
-(MNBusinessSeparatorViewModel *)footerSeparator;
-(NSURL *)receiptURL;
-(MNRideServiceMessageMapViewModel *)map;
-(MNBusinessLogoViewModel *)logo;
-(MNBusinessStackedContainerViewModel *)locations;
-(MNBusinessTableRowViewModel *)footer;
@end
