/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {
    bool  _didVendFramebuffer;
    NSMapTable * _directedEdgesByNode;
    BWInferenceSchedulerGraph * _graph;
    unsigned long long  _jobCount;
    BWInferenceSchedulerJobList * _prototypeJobList;
}

+ (void)initialize;

- (id)_addScalingNodesForNodesExpectingInputs:(id)arg1 nodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodesForExternalRequirements:(id)arg4 fencedMediaKeys:(id)arg5 iterations:(unsigned long long)arg6;
- (id)_connectNodesExpectingInputs:(id)arg1 toNodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodeForExternalRequirement:(id)arg4;
- (id)_newScalingNodesForScalingRequirement:(id)arg1 fencedMedia:(bool)arg2;
- (void)_populateJobList:(id)arg1 fromGraphEdges:(id)arg2 withHeadNode:(id)arg3 jobTypes:(id)arg4;
- (void)_prepareToConnectNode:(id)arg1;
- (bool)_validToDeriveFormat:(id)arg1 fromFormat:(id)arg2 vendingProvider:(id)arg3;
- (void)dealloc;
- (id)initWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3;
- (id)newFramebuffer;

@end
