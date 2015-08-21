/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/TAGCustomEvaluator.h>

@class TAGContainer, NSString;

@interface TAGFunctionCallTagHandlerAdapter : NSObject <TAGCustomEvaluator> {

	TAGContainer* _container;

}

@property (retain) TAGContainer * container;                        //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)evaluate:(id)arg1 parameters:(id)arg2 ;
-(void)setContainer:(TAGContainer *)arg1 ;
-(TAGContainer *)container;
-(id)initWithContainer:(id)arg1 ;
@end

