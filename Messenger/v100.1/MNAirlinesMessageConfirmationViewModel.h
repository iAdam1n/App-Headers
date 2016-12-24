/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNAirlinesHeaderViewModel, MNBusinessStackedContainerViewModel, MNBusinessTableRowViewModel, MNBusinessLabelViewModel;

@interface MNAirlinesMessageConfirmationViewModel : FBValueObject <NSCopying> {

	NSString* _itineraryId;
	MNAirlinesHeaderViewModel* _headerViewModel;
	MNBusinessStackedContainerViewModel* _passengerSeatAssignmentsViewModel;
	MNBusinessStackedContainerViewModel* _flightInfoSectionsViewModel;
	MNBusinessTableRowViewModel* _totalPriceFooterViewModel;
	MNBusinessLabelViewModel* _viewDetailsButtonLabelViewModel;

}

@property (nonatomic,copy,readonly) NSString * itineraryId;                                                               //@synthesize itineraryId=_itineraryId - In the implementation block
@property (nonatomic,copy,readonly) MNAirlinesHeaderViewModel * headerViewModel;                                          //@synthesize headerViewModel=_headerViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * passengerSeatAssignmentsViewModel;              //@synthesize passengerSeatAssignmentsViewModel=_passengerSeatAssignmentsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * flightInfoSectionsViewModel;                    //@synthesize flightInfoSectionsViewModel=_flightInfoSectionsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowViewModel * totalPriceFooterViewModel;                              //@synthesize totalPriceFooterViewModel=_totalPriceFooterViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * viewDetailsButtonLabelViewModel;                           //@synthesize viewDetailsButtonLabelViewModel=_viewDetailsButtonLabelViewModel - In the implementation block
-(MNAirlinesHeaderViewModel *)headerViewModel;
-(MNBusinessStackedContainerViewModel *)flightInfoSectionsViewModel;
-(id)initWithItineraryId:(id)arg1 headerViewModel:(id)arg2 passengerSeatAssignmentsViewModel:(id)arg3 flightInfoSectionsViewModel:(id)arg4 totalPriceFooterViewModel:(id)arg5 viewDetailsButtonLabelViewModel:(id)arg6 ;
-(NSString *)itineraryId;
-(MNBusinessStackedContainerViewModel *)passengerSeatAssignmentsViewModel;
-(MNBusinessTableRowViewModel *)totalPriceFooterViewModel;
-(MNBusinessLabelViewModel *)viewDetailsButtonLabelViewModel;
@end
