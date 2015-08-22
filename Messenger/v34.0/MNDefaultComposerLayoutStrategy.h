/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNComposerLayoutStrategy.h>

@class NSString;

@interface MNDefaultComposerLayoutStrategy : NSObject <MNComposerLayoutStrategy> {

	double _minComposeViewWidth;
	double _maxTabWidth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_widthCanFitOneLineComposer:(double)arg1 ;
-(BOOL)_heightCanFitTwoLineComposer:(double)arg1 ;
-(id)_layoutConfigurationForOneLineWithWidth:(double)arg1 totalNumberOfTabs:(unsigned long long)arg2 ;
-(id)_layoutConfigurationForTwoLineWithWidth:(double)arg1 totalNumberOfTabs:(unsigned long long)arg2 ;
-(id)initWithMinComposeViewWidth:(double)arg1 maxTabWidth:(double)arg2 ;
-(id)layoutConfigurationForContext:(id)arg1 totalNumberOfTabs:(unsigned long long)arg2 actionViewLocation:(long long)arg3 actionViewWidth:(double)arg4 ;
@end
