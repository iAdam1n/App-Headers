/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class MNAirlinesHeaderViewModel, MNBusinessTableViewModel, MNAirlinesFlightInfoSectionViewModel, MNBusinessLabelViewModel, UIColor;

@interface MNAirlinesMessageBoardingPassViewModel : FBValueObject <NSCopying> {

	MNAirlinesHeaderViewModel* _header;
	MNBusinessTableViewModel* _passengerSeatAssignment;
	MNAirlinesFlightInfoSectionViewModel* _flightInfoSection;
	MNBusinessLabelViewModel* _viewBoardingPassButton;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) MNAirlinesHeaderViewModel * header;                                    //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableViewModel * passengerSeatAssignment;                    //@synthesize passengerSeatAssignment=_passengerSeatAssignment - In the implementation block
@property (nonatomic,copy,readonly) MNAirlinesFlightInfoSectionViewModel * flightInfoSection;              //@synthesize flightInfoSection=_flightInfoSection - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * viewBoardingPassButton;                     //@synthesize viewBoardingPassButton=_viewBoardingPassButton - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)initWithHeader:(id)arg1 passengerSeatAssignment:(id)arg2 flightInfoSection:(id)arg3 viewBoardingPassButton:(id)arg4 backgroundColor:(id)arg5 ;
-(MNBusinessTableViewModel *)passengerSeatAssignment;
-(MNAirlinesFlightInfoSectionViewModel *)flightInfoSection;
-(MNBusinessLabelViewModel *)viewBoardingPassButton;
-(UIColor *)backgroundColor;
-(MNAirlinesHeaderViewModel *)header;
@end

