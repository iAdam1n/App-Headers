/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNMontageComposerCompositionConfiguration;

@interface MNMontageComposerPresentationConfiguration : FBValueObject <NSCopying> {

	NSString* _artPickerSectionId;
	MNMontageComposerCompositionConfiguration* _compositionConfig;

}

@property (nonatomic,copy,readonly) NSString * artPickerSectionId;                                              //@synthesize artPickerSectionId=_artPickerSectionId - In the implementation block
@property (nonatomic,copy,readonly) MNMontageComposerCompositionConfiguration * compositionConfig;              //@synthesize compositionConfig=_compositionConfig - In the implementation block
-(id)initWithArtPickerSectionId:(id)arg1 compositionConfig:(id)arg2 ;
-(NSString *)artPickerSectionId;
-(MNMontageComposerCompositionConfiguration *)compositionConfig;
@end
