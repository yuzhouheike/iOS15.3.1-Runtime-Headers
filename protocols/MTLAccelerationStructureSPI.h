/* Generated by RuntimeBrowser.
 */

@protocol MTLAccelerationStructureSPI <MTLAccelerationStructure>

@required

- (<MTLBuffer> *)buffer;
- (unsigned long long)bufferOffset;
- (unsigned long long)resourceIndex;
- (unsigned long long)uniqueIdentifier;

@optional

- (MTLAccelerationStructureDescriptor *)descriptor;
- (void)setDescriptor:(MTLAccelerationStructureDescriptor *)arg1;

@end
