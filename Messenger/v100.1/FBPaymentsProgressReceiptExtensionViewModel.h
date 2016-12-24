/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBPaymentsProgressReceiptExtensionViewModel : FBValueObject <NSCopying> {

	NSArray* _availableSteps;
	NSString* _currentStepTitle;
	NSArray* _actionDescriptors;

}

@property (nonatomic,copy,readonly) NSArray * availableSteps;                 //@synthesize availableSteps=_availableSteps - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentStepTitle;              //@synthesize currentStepTitle=_currentStepTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionDescriptors;              //@synthesize actionDescriptors=_actionDescriptors - In the implementation block
-(id)initWithAvailableSteps:(id)arg1 currentStepTitle:(id)arg2 actionDescriptors:(id)arg3 ;
-(NSArray *)availableSteps;
-(NSString *)currentStepTitle;
-(NSArray *)actionDescriptors;
@end
