/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMLESuggestion, FBComposerLifeEventExtraAttachments, NSString;

@interface FBComposerLifeEventAttachments : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	FBMLESuggestion* _lifeEventSuggestion;
	FBMLESuggestion* _customLifeEventSuggestion;
	FBComposerLifeEventExtraAttachments* _lifeEventExtraAttachments;

}

@property (nonatomic,copy,readonly) FBMLESuggestion * lifeEventSuggestion;                                        //@synthesize lifeEventSuggestion=_lifeEventSuggestion - In the implementation block
@property (nonatomic,copy,readonly) FBMLESuggestion * customLifeEventSuggestion;                                  //@synthesize customLifeEventSuggestion=_customLifeEventSuggestion - In the implementation block
@property (nonatomic,copy,readonly) FBComposerLifeEventExtraAttachments * lifeEventExtraAttachments;              //@synthesize lifeEventExtraAttachments=_lifeEventExtraAttachments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMLESuggestion *)customLifeEventSuggestion;
-(id)initWithLifeEventSuggestion:(id)arg1 customLifeEventSuggestion:(id)arg2 lifeEventExtraAttachments:(id)arg3 ;
-(FBMLESuggestion *)lifeEventSuggestion;
-(FBComposerLifeEventExtraAttachments *)lifeEventExtraAttachments;
-(id)shallowCopy;
@end
