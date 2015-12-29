//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPAutomationPerformanceMonitor, SKPMemoryPerformanceMonitor, SKPStartupPerformanceMonitor, SKPTeardownPerformanceMonitor;

@interface SKPNFR : NSObject
{
    SKPStartupPerformanceMonitor *_startupPerformanceMonitor;
    SKPMemoryPerformanceMonitor *_memoryPerformanceMonitor;
    SKPTeardownPerformanceMonitor *_teardownPerformanceMonitor;
    SKPAutomationPerformanceMonitor *_automationPerformanceMonitor;
}

@property(readonly, nonatomic) SKPAutomationPerformanceMonitor *automationPerformanceMonitor; // @synthesize automationPerformanceMonitor=_automationPerformanceMonitor;
@property(readonly, nonatomic) SKPTeardownPerformanceMonitor *teardownPerformanceMonitor; // @synthesize teardownPerformanceMonitor=_teardownPerformanceMonitor;
@property(readonly, nonatomic) SKPMemoryPerformanceMonitor *memoryPerformanceMonitor; // @synthesize memoryPerformanceMonitor=_memoryPerformanceMonitor;
@property(readonly, nonatomic) SKPStartupPerformanceMonitor *startupPerformanceMonitor; // @synthesize startupPerformanceMonitor=_startupPerformanceMonitor;
- (void).cxx_destruct;
- (id)init;

@end
