/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBComposerEventDate, NSString;

@interface FBComposerSelectableDate : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	FBComposerEventDate* _eventStartDate;
	FBComposerEventDate* _eventEndDate;
	FBComposerEventDate* _earliestDateAllowed;

}

@property (nonatomic,copy,readonly) FBComposerEventDate * eventStartDate;                   //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerEventDate * eventEndDate;                     //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,copy,readonly) FBComposerEventDate * earliestDateAllowed;              //@synthesize earliestDateAllowed=_earliestDateAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 earliestDateAllowed:(id)arg3 ;
-(FBComposerEventDate *)earliestDateAllowed;
-(FBComposerEventDate *)eventStartDate;
-(FBComposerEventDate *)eventEndDate;
-(id)shallowCopy;
@end
