/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNComposerExtensibleExperimentContext : FBExperimentContext {

	BOOL _showPopoverOverflowExtension;
	BOOL _showPopoverOverflowExtensionForiPad;
	BOOL _showTrayOverflowExtension;
	BOOL _enablePagingComposer;

}

@property (nonatomic,readonly) BOOL showPopoverOverflowExtension;                     //@synthesize showPopoverOverflowExtension=_showPopoverOverflowExtension - In the implementation block
@property (nonatomic,readonly) BOOL showPopoverOverflowExtensionForiPad;              //@synthesize showPopoverOverflowExtensionForiPad=_showPopoverOverflowExtensionForiPad - In the implementation block
@property (nonatomic,readonly) BOOL showTrayOverflowExtension;                        //@synthesize showTrayOverflowExtension=_showTrayOverflowExtension - In the implementation block
@property (nonatomic,readonly) BOOL enablePagingComposer;                             //@synthesize enablePagingComposer=_enablePagingComposer - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
+(BOOL)allowUserInterfaceIdiom:(long long)arg1 ;
-(BOOL)showPopoverOverflowExtension;
-(BOOL)showPopoverOverflowExtensionForiPad;
-(BOOL)showTrayOverflowExtension;
-(BOOL)enablePagingComposer;
@end
